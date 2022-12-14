
// ---- Functions to handle IR code emissions ---- //
FILE * IRcode;
int x = 20;
void  initIRcodeFile(){
    IRcode = fopen("IRcode.ir", "w");
    fprintf(IRcode, "\n\n#### IR Code ####\n\n");
    fclose(IRcode);
}

void emitBinaryOperation(char op[1], const char* id1, const char* id2){
    fprintf(IRcode, "T1 = %s %s %s", id1, op, id2);
    fclose(IRcode);
}


void emitAssignment(char * id1, char * id2){

  fprintf(IRcode, "T0 = %s\n", id1);
  fprintf(IRcode, "T1 = %s\n", id2);
  fprintf(IRcode, "T1 = T0\n");
  fclose(IRcode);
}

void emitConstantIntAssignment (char id1[50], int id2[50]){
    IRcode = fopen("IRcode.ir", "a");
    fprintf(IRcode, "T%d = %s\n",id2, id1);
    fclose(IRcode);
}

void emitIRAssignment(char id1[50], char id2[50],int curScope[50]){
    IRcode = fopen("IRcode.ir", "a");
    fprintf(IRcode, "T%d = %s\n",curScope, id2);
    fclose(IRcode);
}

void emitWriteId(char * id){

    fprintf (IRcode, "output T%s\n", id);
    fclose(IRcode);
}

void emitConstantWhileAssignment (char id1[50]){
    IRcode = fopen("IRcode.ir", "a");
    fprintf(IRcode, "T%d = %s",x, id1);
    fclose(IRcode);
    x = x + 1;
}    
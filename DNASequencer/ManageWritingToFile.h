#include "DNAGenerator.h"

/*

This class is responsible for writing all of the calculated stats onto a file called diegoavena.out
and to write the 1000 generated DNA strands into 1000 lines that have lengths equal to the 1000 lengths
generated by the generator

*/
class ManageWritingToFile {

bool CheckIfFileAlreadyExists(); //will check if the file being written to already exists, and if it does not the return value will signal to the program that my name and student id should be written at top of the file
DNAGenerator generator; //this will be used to generate the 1000 DNA lines using methods located in DNAGenerator.
//void divideAndWriteTheGeneratedDNAStrandsIntoTheirCorrectLines(std::ofstream file, std::string generatedDNA);

public:
ManageWritingToFile(); //default contstructor
~ManageWritingToFile(); //destructor
void RecordStatisticsOntoFile(float sumOfDNAStrandLengths, float meanOfDNAStrandLengths, float varianceOfDNAStrandLengths, float standardDeviationOfDNAStrandLengths,
float AProb, float CProb, float TProb, float GProb, float AAProb, float ACProb, float ATProb, float AGProb, float CCProb, float CAProb, float CTProb, float CGProb,
float TTProb, float TAProb, float TCProb, float TGProb, float GGProb, float GAProb, float GCProb, float GTProb,
float quantityOfA, float quantityOfC, float quantityOfT, float quantityOfG); //writes all of the calculated statistics for the inputed DNA file onto a file called diegoavena.out

};
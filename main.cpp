//
//  main.cpp
//  bankAnalysis
//
//  Created by Marcin Welninski on 3/13/17.
//  Copyright © 2017 Marcin Welninski. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;



void main()
{
    //Setting Enironment Variables and variable values
    string fileLocation;
    cout << "Provide the file path to your bank history .csv file (do not include the file name):" << endl;
    cin >> fileLocation;
    string fileName;
    cout << "\nWhat is the .csv file name:" << endl;
    cin >> fileName;
    string filePathName = fileLocation + fileName;

    
    gROOT->Reset();
    gStyle->SetOptFit(1111);
    
    
    //According to xcode, there is no such function called fopen
    //Open a file
    FILE *datafile1 = fopen(filePathName,"r");
    
    //Initiate variables being updated from the original file
    string dateTime[2000];
    string month[2000];
    int month[2000];
    string day[2000];
    int day[2000];
    string year[2000];
    int year[2000];
    string transaction[2000];
    string name[2000];
    string memos[2000];
    float amount[2000];
    int transactionId[2000];

    
    //Initiate variables used for reporting
    float secondPerYear = 365.25 * 24 * 60 *60;
    string spendingCategories[100];
    string spendingTagToName[100];
    string transactionTag[2000];
    string ignoreAddSubList[100];
    string ignoreAddSub[2000];
    int numberOfRows = 0;
    int numberOfCategories;
    
    
    
    
    //Data below currently does not allow for code to be deployed
    
    //load values into main matrix
    while(fscanf(bankFile, "%s %s %s %s %f \n", &date[numberOfRows], &transaction[numberOfRows], &name[numberOfRows], &memo[numberOfRows], &amount[numberOfRows]))
    {
        //Break up date into month, day, year seperate values
        //Break up data string
        
        //Parse delimited strings to integer values
        
        
        //label the transaction with an id number
        transactionId[numberOfRows] = numberOfRows + 1;
        numberOfRows++;
    }

    
    
    
    
    
    
    //figure out the number of rows in the loaded file
    
    
    
    
    //Still working on the appropriate way to organiza the information collected with user interest and input
    
    //Add categories user is interested in tracking
    string keepAddingCategories = "yes";
    while(keepAddingCategories == "yes")
    {
        for(int i = 0; i > -1; i++)
        {
            //Provide a tag name for purchases you want to track, transactions that are not tagged will be tracked as general/day-to-day purchase and will outomatically be tagged as day-to-day purchase.
            cout << "Please provide a category name you would like to track" << endl;
            cout << "Any category you do not add to track seperatly will be tracked as other" << endl;
            cin >> spendingCategories[i];
            
            //Provide the transaction id number for the transaction name you want to tag that happens often enough you want to track it.
            cout << "Please provide a transaction id that is of this category type" << endl;
            cin >> transactionId[i];
            
            //Associate the transaction id number with the
            spendingTagToName[i] = transaction[transactionId[i]];
            cout << "Do you have another category that you would like to track:" << endl;
            cin >> keepAddingCategories;
            
            //Collect if the tag for the transaction should be counted as tracking for savings, legitimate purchases, or if the transaction should be ignore such as monthly loan payments, rent, monthly/bi-monthly salary/income.
            cout << "Should " << spendingCategories[i] << " be counted as savings/losing/ignore completely?(s/l/i):" << endl;
            cin >> ignoreAddSubList[i];
            
            //Ask user if they wouldlike to add more tags
            cout << "Do you have another transaction type you would like to track?" << endl;
            cin >> keepAddingCategories;
            if(keepAddingCategories == "y" || keepAddingCategories == "Y" || keepAddingCategories == "yes" || keepAddingCategories == "Yes")
            {
                keepAddingCategories = "yes";
            }
            else
            {
                keepAddingCategories = "no";
                numberOfCategories = i++;
                break;
            }
        }
        cout << "Out of the for and while Loop." << endl;
        
    }
    
    //Find all the spendingTag to name strings that are the same as those marked in the categories above and add the category for all those tags. Any strings that do not match should have their spendingTageToName variables updated to day-to-day purchases.
    
    
    
    
    //Update Transaction Tags
    for(int j = 0; j < numberOfRows; j++)
    {
        transactionTag[j] = spendingTagToName[j];
        ignoreAddSub[j] = ignoreAddSubList[j];
    }
    
    //Category Totals and Saving/Losing Totals per month
    
    
    //Monthly IgnoreAddSubb Totals per month
    
    
    //fft of mmajor purchase that are not monthly occurances
    
    
    //Print out Graphs
    while()
    {
        //n = some amount
        TGraph *gr_Amn1EvCP = new TGraph(n, /*"date"*/, /*"total amount"*/);
        TCanvas *c1 = new TCanvas("c1", /*"category totals per month"*/, 600, 800);
        c1->Divide(1,1);
        c1->cd(1);
        gr_Amn1EvCP->Draw();
        gr_Amn1EvCP->SetTitle(/*"category totals per month"*/);
    }
    
    
}





















/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface SFSHA1DigestOperation_Ivars : NSObject {
    struct CC_SHA1state_st { 
        unsigned int h0; 
        unsigned int h1; 
        unsigned int h2; 
        unsigned int h3; 
        unsigned int h4; 
        unsigned int Nl; 
        unsigned int Nh; 
        unsigned int data[16]; 
        int num; 
    }  context;
}

@end
/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface SFMD5DigestOperation_Ivars : NSObject {
    struct CC_MD5state_st { 
        unsigned int A; 
        unsigned int B; 
        unsigned int C; 
        unsigned int D; 
        unsigned int Nl; 
        unsigned int Nh; 
        unsigned int data[16]; 
        int num; 
    }  context;
}

@end

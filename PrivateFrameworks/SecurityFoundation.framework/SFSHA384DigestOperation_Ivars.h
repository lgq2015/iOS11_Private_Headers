/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface SFSHA384DigestOperation_Ivars : NSObject {
    struct CC_SHA512state_st { 
        unsigned long long count[2]; 
        unsigned long long hash[8]; 
        unsigned long long wbuf[16]; 
    }  context;
}

@end

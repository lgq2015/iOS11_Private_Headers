/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface SFPBKDF2Operation_Ivars : NSObject {
    long long  iterationCount;
    <SFPseudoRandomFunction> * pseudoRandomFunction;
    NSData * salt;
}

- (void).cxx_destruct;

@end

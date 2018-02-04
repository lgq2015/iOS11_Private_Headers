/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPCMSSample : NSObject {
    NSData * _bitString;
    unsigned long long  _hashFunctionIndex;
}

@property (nonatomic, readonly) NSData *bitString;
@property (nonatomic, readonly) unsigned long long hashFunctionIndex;

+ (id)cmsSampleWith:(id)arg1 privacyParameter:(double)arg2 hashFunctionCount:(unsigned long long)arg3 bitCount:(unsigned long long)arg4;
+ (id)convertToHexString:(id)arg1;
+ (id)dataFor:(id)arg1 hashAtIndex:(unsigned long long)arg2 privacyParameter:(double)arg3 bitCount:(unsigned long long)arg4;
+ (id)jsonStringFrom:(id)arg1 hashIndex:(unsigned long long)arg2;
+ (id)jsonStringFromSequence:(id)arg1 sequenceHashIndex:(unsigned short)arg2 fragment:(id)arg3 fragmentHashIndex:(unsigned short)arg4 fragmentPosition:(unsigned short)arg5;

- (void).cxx_destruct;
- (id)bitString;
- (unsigned long long)hashFunctionIndex;
- (id)init;
- (id)initWith:(id)arg1 privacyParameter:(double)arg2 hashFunctionCount:(unsigned long long)arg3 bitCount:(unsigned long long)arg4;

@end

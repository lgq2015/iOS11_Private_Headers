/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPHCMSWordRecord : _DPCMSWordRecord {
    int  _fragmentBitIndex;
    int  _sequenceBitIndex;
}

@property (nonatomic) int fragmentBitIndex;
@property (nonatomic) int sequenceBitIndex;

+ (id)entityName;

- (bool)copyFromManagedObject:(id)arg1;
- (bool)copyToManagedObject:(id)arg1;
- (id)description;
- (int)fragmentBitIndex;
- (id)initWithKey:(id)arg1 plainSequence:(id)arg2 sequence:(id)arg3 sequenceHashIndex:(unsigned short)arg4 sequenceBitIndex:(unsigned int)arg5 plainFragment:(id)arg6 fragment:(id)arg7 fragmentHashIndex:(unsigned short)arg8 fragmentBitIndex:(unsigned int)arg9 fragmentPosition:(unsigned short)arg10 creationDate:(double)arg11 submitted:(bool)arg12 objectId:(id)arg13;
- (id)jsonString;
- (int)sequenceBitIndex;
- (void)setFragmentBitIndex:(int)arg1;
- (void)setSequenceBitIndex:(int)arg1;

@end

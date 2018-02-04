/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXHistogramData : NSObject <NSSecureCoding> {
    unsigned int * _abs;
    unsigned int  _capacity;
    unsigned int  _count;
    bool  _enumerationInProgress;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    float * _scores;
}

+ (bool)supportsSecureCoding;

- (id)aSet;
- (void)add:(float)arg1 a:(unsigned short)arg2 b:(unsigned short)arg3;
- (void)applyPermutationToA:(id)arg1;
- (id)bSet;
- (void)clear;
- (int)countWhereA:(unsigned short)arg1 b:(unsigned short)arg2;
- (void)dealloc;
- (void)decayByFactor:(float)arg1;
- (void)decayWithHalfLife:(float)arg1;
- (void)deleteWhereA:(unsigned short)arg1 b:(unsigned short)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerate:(id /* block */)arg1;
- (id)init;
- (id)initWithCategoricalHistogram:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeHistogram:(id)arg1;
- (float)lookupSmoothedWithBucketCount:(unsigned short)arg1 distanceScale:(float)arg2 a:(unsigned short)arg3 b:(unsigned short)arg4;
- (float)lookupUnsmoothedA:(unsigned short)arg1 b:(unsigned short)arg2;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMURangeToStringMap : NSObject <NSSecureCoding> {
    void * _rangeAndStringVectorVoidPtr;
    bool  _sorted;
    void * _stringToIndexMapVoidPtr;
    NSMutableArray * _strings;
}

+ (void)_claimUnarchivingOfClass:(id)arg1;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)count;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)indexForString:(id)arg1 insertIfMissing:(bool)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })rangeContainingAddress:(unsigned long long)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })rangeForString:(id)arg1 startingAtAddress:(unsigned long long)arg2;
- (void)setString:(id)arg1 forRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)sort;
- (id)stringForAddress:(unsigned long long)arg1;
- (id)stringForIndex:(unsigned int)arg1;
- (unsigned int)uniquedStringCount;

@end

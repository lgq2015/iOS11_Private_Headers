/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartGridCountAdapter : TSCHChartGridAdapter {
    bool  mCountFromOne;
    unsigned long long  mIndexFactor;
}

@property (nonatomic) bool countFromOne;
@property (nonatomic) unsigned long long indexFactor;

- (unsigned long long)count;
- (bool)countFromOne;
- (unsigned long long)indexFactor;
- (id)initWithCount:(unsigned long long)arg1;
- (void)setCountFromOne:(bool)arg1;
- (void)setIndexFactor:(unsigned long long)arg1;
- (void)setValue:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)valueAtIndex:(unsigned long long)arg1;
- (id*)valuesAtIndexes:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICDimensionSumCache : NSObject {
    NSMutableDictionary * _dimensions;
    double  _estimateDimension;
    double  _sum;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSMutableDictionary *dimensions;
@property (nonatomic, readonly) double estimateDimension;
@property (nonatomic) double sum;

- (void).cxx_destruct;
- (unsigned long long)count;
- (double)dimensionForKey:(id)arg1;
- (id)dimensions;
- (double)estimateDimension;
- (id)init;
- (id)initWithKeys:(id)arg1 andEstimateDimension:(double)arg2;
- (void)removeDimensionForKey:(id)arg1;
- (void)setDimension:(double)arg1 forKey:(id)arg2;
- (void)setSum:(double)arg1;
- (double)sum;

@end

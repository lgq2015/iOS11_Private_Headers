/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHSeriesDimension : NSObject <NSCopying> {
    int  mAxisType;
    unsigned long long  mSeriesIndex;
}

@property (nonatomic, readonly) int axisType;
@property (nonatomic, readonly) unsigned long long seriesIndex;

+ (id)seriesDimensionWithSeriesIndex:(unsigned long long)arg1 axisType:(int)arg2;

- (int)axisType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSeriesIndex:(unsigned long long)arg1 axisType:(int)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)seriesIndex;

@end

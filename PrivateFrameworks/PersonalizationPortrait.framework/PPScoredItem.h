/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPScoredItem : NSObject <NSCopying> {
    NSObject<NSCopying> * _item;
    double  _score;
}

@property (nonatomic, readonly) NSObject<NSCopying> *item;
@property (nonatomic, readonly) double score;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithItem:(id)arg1 score:(double)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToScoredItem:(id)arg1;
- (id)item;
- (double)score;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedEdition : NSObject <NSCopying> {
    FCDateRange * _feedDateRange;
    NSDate * _keyDate;
}

@property (nonatomic, copy) FCDateRange *feedDateRange;
@property (nonatomic, copy) NSDate *keyDate;

+ (id)editionWithKeyDate:(id)arg1 feedDateRange:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)feedDateRange;
- (unsigned long long)hash;
- (id)initWithKeyDate:(id)arg1 feedDateRange:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)keyDate;
- (void)setFeedDateRange:(id)arg1;
- (void)setKeyDate:(id)arg1;

@end

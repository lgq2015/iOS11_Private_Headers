/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFStoreCardSectionEngagementFeedback : SFCardSectionEngagementFeedback {
    long long  _productPageResult;
}

@property (nonatomic) long long productPageResult;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProductPageResult:(long long)arg1;
- (long long)productPageResult;
- (void)setProductPageResult:(long long)arg1;

@end

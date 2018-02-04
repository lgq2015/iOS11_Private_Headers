/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIProductPage : NSObject <NSCopying> {
    long long  _defaultPageFragment;
    SKUIProductPageItem * _item;
    NSData * _itmlData;
    NSHTTPURLResponse * _itmlResponse;
    SSMetricsConfiguration * _metricsConfiguration;
    NSString * _metricsPageDescription;
    NSURL * _pageURL;
    SKUIProductPageProductInfo * _productInformation;
    NSArray * _relatedContentSwooshes;
    SKUIReviewConfiguration * _reviewConfiguration;
    SKUIUber * _uber;
}

@property (nonatomic, retain) NSData *ITMLData;
@property (nonatomic, retain) NSHTTPURLResponse *ITMLResponse;
@property (nonatomic) long long defaultPageFragment;
@property (nonatomic, retain) SKUIProductPageItem *item;
@property (nonatomic, retain) SSMetricsConfiguration *metricsConfiguration;
@property (nonatomic, copy) NSString *metricsPageDescription;
@property (nonatomic, copy) NSURL *pageURL;
@property (nonatomic, retain) SKUIProductPageProductInfo *productInformation;
@property (nonatomic, copy) NSArray *relatedContentSwooshes;
@property (nonatomic, retain) SKUIReviewConfiguration *reviewConfiguration;
@property (nonatomic, retain) SKUIUber *uber;

- (void).cxx_destruct;
- (id)ITMLData;
- (id)ITMLResponse;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)defaultPageFragment;
- (id)item;
- (id)metricsConfiguration;
- (id)metricsPageDescription;
- (id)pageURL;
- (id)productInformation;
- (id)relatedContentSwooshes;
- (id)reviewConfiguration;
- (void)setDefaultPageFragment:(long long)arg1;
- (void)setITMLData:(id)arg1;
- (void)setITMLResponse:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setMetricsConfiguration:(id)arg1;
- (void)setMetricsPageDescription:(id)arg1;
- (void)setPageURL:(id)arg1;
- (void)setProductInformation:(id)arg1;
- (void)setRelatedContentSwooshes:(id)arg1;
- (void)setReviewConfiguration:(id)arg1;
- (void)setUber:(id)arg1;
- (id)uber;

@end

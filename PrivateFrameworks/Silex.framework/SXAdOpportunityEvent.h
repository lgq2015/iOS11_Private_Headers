/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXAdOpportunityEvent : SXAnalyticsEvent {
    ADBannerView * _bannerView;
    NSString * _componentIdentifier;
    NSError * _error;
    bool  _expanded;
    int  _opportunityError;
    NSString * _opportunityIdentifier;
    double  _positionInArticle;
    bool  _shown;
}

@property (nonatomic, retain) ADBannerView *bannerView;
@property (nonatomic, retain) NSString *componentIdentifier;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) bool expanded;
@property (nonatomic) int opportunityError;
@property (nonatomic, retain) NSString *opportunityIdentifier;
@property (nonatomic) double positionInArticle;
@property (nonatomic) bool shown;

- (void).cxx_destruct;
- (id)bannerView;
- (id)componentIdentifier;
- (id)description;
- (id)error;
- (bool)expanded;
- (int)opportunityError;
- (id)opportunityIdentifier;
- (double)positionInArticle;
- (void)setBannerView:(id)arg1;
- (void)setComponentIdentifier:(id)arg1;
- (void)setError:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setOpportunityError:(int)arg1;
- (void)setOpportunityIdentifier:(id)arg1;
- (void)setPositionInArticle:(double)arg1;
- (void)setShown:(bool)arg1;
- (bool)shown;

@end

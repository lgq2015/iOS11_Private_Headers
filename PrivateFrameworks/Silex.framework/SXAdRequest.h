/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXAdRequest : NSObject {
    unsigned long long  _adType;
    NSDictionary * _campaignData;
    NSString * _componentIdentifier;
    NSDictionary * _componentMetadata;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    bool  _dynamicPlacement;
    struct CGPoint { 
        double x; 
        double y; 
    }  _positionInArticle;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewportSize;
}

@property (nonatomic) unsigned long long adType;
@property (nonatomic, retain) NSDictionary *campaignData;
@property (nonatomic, retain) NSString *componentIdentifier;
@property (nonatomic, retain) NSDictionary *componentMetadata;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic) bool dynamicPlacement;
@property (nonatomic) struct CGPoint { double x1; double x2; } positionInArticle;
@property (nonatomic) struct CGSize { double x1; double x2; } viewportSize;

- (void).cxx_destruct;
- (unsigned long long)adType;
- (id)campaignData;
- (id)componentIdentifier;
- (id)componentMetadata;
- (struct CGSize { double x1; double x2; })contentSize;
- (bool)dynamicPlacement;
- (struct CGPoint { double x1; double x2; })positionInArticle;
- (void)setAdType:(unsigned long long)arg1;
- (void)setCampaignData:(id)arg1;
- (void)setComponentIdentifier:(id)arg1;
- (void)setComponentMetadata:(id)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDynamicPlacement:(bool)arg1;
- (void)setPositionInArticle:(struct CGPoint { double x1; double x2; })arg1;
- (void)setViewportSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })viewportSize;

@end

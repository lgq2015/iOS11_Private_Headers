/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUEndOfArticleSettings : NSObject <NSCopying> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    unsigned long long  _layoutType;
    bool  _loadEmailSubscriptionFooter;
    bool  _loadPublisherContent;
    bool  _loadRelatedContent;
    UITraitCollection * _traitCollection;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) unsigned long long layoutType;
@property (nonatomic) bool loadEmailSubscriptionFooter;
@property (nonatomic) bool loadPublisherContent;
@property (nonatomic) bool loadRelatedContent;
@property (nonatomic, readonly) UITraitCollection *traitCollection;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 traitCollection:(id)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)layoutType;
- (bool)loadEmailSubscriptionFooter;
- (bool)loadPublisherContent;
- (bool)loadRelatedContent;
- (unsigned long long)numberOfItemsPerRowForHeadlineCount:(unsigned long long)arg1;
- (unsigned long long)numberOfItemsSupportedForHeadlineCount:(unsigned long long)arg1;
- (unsigned long long)numberOfRowsForHeadlineCount:(unsigned long long)arg1;
- (void)setLoadEmailSubscriptionFooter:(bool)arg1;
- (void)setLoadPublisherContent:(bool)arg1;
- (void)setLoadRelatedContent:(bool)arg1;
- (id)traitCollection;

@end

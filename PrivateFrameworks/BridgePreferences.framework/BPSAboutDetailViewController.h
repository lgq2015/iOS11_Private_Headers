/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

@interface BPSAboutDetailViewController : BPSSetupPageViewController {
    NSMutableArray * _bulletLabels;
    NSArray * _bullets;
    UILabel * _footerLabel;
    NSString * _footerString;
    UIImage * _headerGlyph;
    UIImageView * _headerGlyphImageView;
    UILabel * _headerLabel;
    NSString * _headerString;
    UIView * _lastViewInContentView;
    id /* block */  _onDismiss;
    NSMutableArray * _paragraphLabels;
    NSArray * _paragraphs;
    UIScrollView * _scrollView;
    NSString * _titleString;
}

@property (nonatomic, retain) NSMutableArray *bulletLabels;
@property (nonatomic, retain) NSArray *bullets;
@property (nonatomic, retain) UILabel *footerLabel;
@property (nonatomic, retain) NSString *footerString;
@property (nonatomic, retain) UIImage *headerGlyph;
@property (nonatomic, retain) UIImageView *headerGlyphImageView;
@property (nonatomic, retain) UILabel *headerLabel;
@property (nonatomic, retain) NSString *headerString;
@property (nonatomic, retain) UIView *lastViewInContentView;
@property (nonatomic, copy) id /* block */ onDismiss;
@property (nonatomic, retain) NSMutableArray *paragraphLabels;
@property (nonatomic, retain) NSArray *paragraphs;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) NSString *titleString;

- (void).cxx_destruct;
- (id)bulletLabels;
- (id)bullets;
- (bool)contentViewIsInAdjustedScrollView;
- (void)donePressed;
- (id)footerLabel;
- (id)footerString;
- (id)headerGlyph;
- (id)headerGlyphImageView;
- (id)headerLabel;
- (id)headerString;
- (id)init;
- (id)lastViewInContentView;
- (id /* block */)onDismiss;
- (id)paragraphLabels;
- (id)paragraphs;
- (void)presentWithController:(id)arg1;
- (void)presentWithController:(id)arg1 onDismiss:(id /* block */)arg2;
- (id)scrollView;
- (void)setBulletLabels:(id)arg1;
- (void)setBullets:(id)arg1;
- (void)setFooterLabel:(id)arg1;
- (void)setFooterString:(id)arg1;
- (void)setHeaderGlyph:(id)arg1;
- (void)setHeaderGlyphImageView:(id)arg1;
- (void)setHeaderLabel:(id)arg1;
- (void)setHeaderString:(id)arg1;
- (void)setLastViewInContentView:(id)arg1;
- (void)setOnDismiss:(id /* block */)arg1;
- (void)setParagraphLabels:(id)arg1;
- (void)setParagraphs:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setTitleString:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)titleString;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end

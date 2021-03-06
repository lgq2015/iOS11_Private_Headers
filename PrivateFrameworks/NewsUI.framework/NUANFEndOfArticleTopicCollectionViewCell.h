/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUANFEndOfArticleTopicCollectionViewCell : UICollectionViewCell {
    <NUANFEndOfArticleTopicCollectionViewCellDelegate> * _delegate;
    NUANFEndOfArticleTopicButton * _topicButton;
    NSString * _topicTitle;
}

@property (nonatomic) <NUANFEndOfArticleTopicCollectionViewCellDelegate> *delegate;
@property (nonatomic, readonly) NUANFEndOfArticleTopicButton *topicButton;
@property (nonatomic, copy) NSString *topicTitle;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg1;
- (void)setTopicTitle:(id)arg1;
- (id)topicButton;
- (void)topicButtonWasTapped:(id)arg1;
- (id)topicTitle;

@end

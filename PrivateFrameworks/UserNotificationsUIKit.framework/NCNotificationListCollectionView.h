/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListCollectionView : UICollectionView {
    <NCNotificationListCollectionViewDelegate> * _listDelegate;
}

@property (nonatomic) <NCNotificationListCollectionViewDelegate> *listDelegate;

- (void).cxx_destruct;
- (id)listDelegate;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setListDelegate:(id)arg1;

@end

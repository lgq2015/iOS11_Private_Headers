/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIReusableFooterView : UICollectionReusableView <SiriUIReusableView>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) SiriUISnippetViewController *snippetViewController;
@property (readonly) Class superclass;

+ (double)defaultHeight;
+ (id)elementKind;
+ (id)reuseIdentifier;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;

@end

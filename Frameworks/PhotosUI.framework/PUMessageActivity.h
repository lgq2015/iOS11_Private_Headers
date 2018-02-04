/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUMessageActivity : UIMessageActivity <PUActivity> {
    PUActivityItemSourceController * _itemSourceController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) PUActivityItemSourceController *itemSourceController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)itemSourceController;
- (void)setItemSourceController:(id)arg1;

@end

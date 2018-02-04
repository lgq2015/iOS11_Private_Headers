/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDParsecAction : DDPreviewAction <DDParsecCollectionDelegate> {
    DDParsecCollectionViewController * _parsecViewController;
    bool  _previewMode;
}

- (void).cxx_destruct;
- (id)createViewController;
- (void)dismissParsecCollection:(id)arg1;
- (int)interactionType;
- (id)localizedName;

@end

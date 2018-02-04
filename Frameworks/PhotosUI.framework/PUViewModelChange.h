/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUViewModelChange : NSObject {
    bool  _hasChanges;
}

@property (nonatomic, readonly) bool hasChanges;

- (bool)hasChanges;
- (void)setHasChanges;

@end

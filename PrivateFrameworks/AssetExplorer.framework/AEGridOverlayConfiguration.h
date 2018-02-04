/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

@interface AEGridOverlayConfiguration : NSObject {
    bool  _showCloudDecoration;
    bool  _showLoopDecoration;
    bool  _showVideoDecoration;
}

@property (nonatomic, readonly) bool showCloudDecoration;
@property (nonatomic, readonly) bool showLoopDecoration;
@property (nonatomic, readonly) bool showVideoDecoration;

- (id)initWithShowCloudDecoration:(bool)arg1 showVideoDecoration:(bool)arg2 showLoopDecoration:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)showCloudDecoration;
- (bool)showLoopDecoration;
- (bool)showVideoDecoration;

@end

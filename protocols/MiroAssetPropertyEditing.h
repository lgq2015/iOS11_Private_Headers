/* made by EzioChiu.
 */

@protocol MiroAssetPropertyEditing <NSObject>

@required

- (unsigned long long)audioLevelForClip:(id <MiroClip>)arg1;
- (void)setAudioLevel:(unsigned long long)arg1 forClip:(id <MiroClip>)arg2;

@end

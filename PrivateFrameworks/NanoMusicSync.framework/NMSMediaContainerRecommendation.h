/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSMediaContainerRecommendation : NMSMediaContainer

- (unsigned long long)estimatedAdditionalStorageForTrackCount:(unsigned long long)arg1;
- (unsigned long long)estimatedAdditionalTrackCount;
- (unsigned long long)estimatedTrackCountFittingInAllowedSpace:(unsigned long long)arg1;
- (id)libraryIdentifiersForContainerType:(unsigned long long)arg1;
- (id)recommendation;
- (unsigned long long)sizeForTracks:(id)arg1;
- (id)trackList;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DAAPExportItem : ML3ExportItem

- (unsigned int)_daapCodeForPropertyKey:(unsigned int)arg1;
- (int)_daapMediaKindForMLMediaType:(int)arg1;
- (int)_daapPlaylistKind;
- (int)_daapSortTypeForTrackOrder:(unsigned int)arg1;
- (id)exportData;
- (int)longValueForProperty:(unsigned int)arg1;
- (long long)longlongValueForProperty:(unsigned int)arg1;
- (id)valueForProperty:(unsigned int)arg1;

@end
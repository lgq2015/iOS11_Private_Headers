/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKTimelapseDiskUtilities : NSObject

+ (id)directoryPathForTimelapseUUID:(id)arg1;
+ (id)dummyFileName;
+ (id)dummyFilePathForTimelapseUUID:(id)arg1;
+ (id)fileNameForImageFrameIndex:(long long)arg1;
+ (long long)frameIndexFromImageFileName:(id)arg1;
+ (bool)hasPendingIrisWork;
+ (bool)hasPendingWork;
+ (id)readFrameFilePathsForTimelapseUUID:(id)arg1;
+ (id)readSecondaryStateForTimelapseUUID:(id)arg1;
+ (id)readSortedStatesFromDiskMergeSecondaryState:(bool)arg1;
+ (id)readStateForTimelapseUUID:(id)arg1 mergeSecondaryState:(bool)arg2;
+ (bool)removeDummyFileForTimelapseUUID:(id)arg1;
+ (bool)reserveDummyFileForTimelapseUUID:(id)arg1 width:(long long)arg2 height:(long long)arg3;
+ (id)secondaryStateFileName;
+ (id)secondaryStateFilePathForTimelapseUUID:(id)arg1;
+ (id)sortedArrayFromFilePathDictionary:(id)arg1 reverse:(bool)arg2;
+ (id)stateFileName;
+ (id)stateFilePathForTimelapseUUID:(id)arg1;
+ (id)timelapseDirectoryPath;
+ (id)timelapseDirectoryPathCreateIfNeeded:(bool)arg1;
+ (id)timelapseUUIDsOnDisk;
+ (id)updateSecondaryStateForMovieWriteAttemptForTimelapseUUID:(id)arg1;
+ (id)updateSecondaryStateForTimelapseUUID:(id)arg1 forStateReadSuccessfully:(bool)arg2;
+ (id)updateSecondaryStateForTimelapseUUID:(id)arg1 withStopReasons:(long long)arg2 stopTime:(id)arg3;
+ (bool)writeSecondaryStateToDisk:(id)arg1 forTimelapseUUID:(id)arg2;
+ (bool)writeStateToDisk:(id)arg1 createDirectoryIfNeeded:(bool)arg2;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PVExportHelper : NSObject

+ (id)_peopleClustersDictionaryForType:(unsigned long long)arg1 withPersonClusterManager:(id)arg2;
+ (bool)exportPersonClusterManager:(id)arg1 toURL:(id)arg2 forPeopleType:(unsigned long long)arg3 error:(id*)arg4;
+ (bool)exportPhotoLibrary:(id)arg1 toURL:(id)arg2 forPeopleType:(unsigned long long)arg3 error:(id*)arg4;
+ (bool)snapshotPhotoLibrary:(id)arg1 toURL:(id)arg2 error:(id*)arg3;

@end

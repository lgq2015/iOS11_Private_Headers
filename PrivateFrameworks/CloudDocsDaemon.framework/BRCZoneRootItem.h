/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCZoneRootItem : BRCDirectoryItem <BRCFSRooted>

- (struct BRCDirectoryItem { Class x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; }*)asFSRoot;
- (id)fileID;
- (id)initWithZoneRootItemID:(id)arg1 session:(id)arg2;
- (bool)isFSRoot;
- (bool)isZoneRoot;
- (id)parentItemID;
- (id)parentItemOnFS;
- (bool)saveToDB;
- (id)st;

@end

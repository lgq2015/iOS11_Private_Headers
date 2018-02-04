/* made by EzioChiu.
 */

@protocol BRCItem <NSCopying, NSSecureCoding>

@required

- (BRCClientZone *)clientZone;
- (bool)isBRAlias;
- (bool)isDead;
- (bool)isDirectory;
- (bool)isDocument;
- (bool)isFSRoot;
- (bool)isFinderBookmark;
- (bool)isLive;
- (bool)isPackage;
- (bool)isSymLink;
- (bool)isZoneRoot;
- (BRCItemID *)itemID;
- (NSNumber *)ownerKey;
- (BRCServerZone *)serverZone;
- (BRCAccountSession *)session;
- (void)setSharingOptions:(unsigned long long)arg1;
- (unsigned long long)sharingOptions;
- (BRCStatInfo *)st;
- (bool)validateLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;

@end

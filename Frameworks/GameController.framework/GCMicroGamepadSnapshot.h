/* made by EzioChiu
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCMicroGamepadSnapshot : GCMicroGamepad {
    NSData * snapshotData;
}

@property (copy) NSData *snapshotData;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithController:(id)arg1 snapshotData:(id)arg2;
- (id)initWithSnapshotData:(id)arg1;
- (void)setSnapshotData:(id)arg1;
- (id)snapshotData;
- (bool)supportsDpadTaps;

@end

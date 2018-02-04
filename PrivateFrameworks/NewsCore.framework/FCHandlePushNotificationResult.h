/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCHandlePushNotificationResult : NSObject <NSCopying> {
    bool  _handled;
    NSSet * _recordZoneIDs;
}

@property (getter=wasHandled, nonatomic) bool handled;
@property (nonatomic, retain) NSSet *recordZoneIDs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)recordZoneIDs;
- (void)setHandled:(bool)arg1;
- (void)setRecordZoneIDs:(id)arg1;
- (bool)wasHandled;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLThumbnailAdditionEntry : NSObject <NSSecureCoding, PQLResultSetInitializer> {
    unsigned long long  _documentID;
    NSDate * _lastHitDate;
    NSURL * _lastSeenURL;
    long long  _size;
    NSData * _vol_uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned long long documentID;
@property (readonly) unsigned long long hash;
@property (retain) NSDate *lastHitDate;
@property (retain) NSURL *lastSeenURL;
@property long long size;
@property (readonly) Class superclass;
@property (readonly) NSString *unparsedVolumeUUID;
@property (retain) NSData *vol_uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)documentID;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (id)initWithCoder:(id)arg1;
- (id)lastHitDate;
- (id)lastSeenURL;
- (void)setDocumentID:(unsigned long long)arg1;
- (void)setLastHitDate:(id)arg1;
- (void)setLastSeenURL:(id)arg1;
- (void)setSize:(long long)arg1;
- (void)setVol_uuid:(id)arg1;
- (long long)size;
- (id)unparsedVolumeUUID;
- (id)vol_uuid;

@end

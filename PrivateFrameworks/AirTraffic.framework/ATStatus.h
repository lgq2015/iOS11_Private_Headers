/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@interface ATStatus : NSObject <NSSecureCoding> {
    bool  _automaticSync;
    unsigned long long  _completedAssetCount;
    NSString * _dataClass;
    NSString * _libraryID;
    NSString * _localizedDescription;
    float  _progress;
    unsigned int  _syncStage;
    unsigned int  _syncType;
    unsigned long long  _totalAssetCount;
    unsigned long long  _totalItemCount;
    bool  _wirelessSync;
}

@property (getter=isAutomaticSync, nonatomic) bool automaticSync;
@property (nonatomic) unsigned long long completedAssetCount;
@property (nonatomic, copy) NSString *dataClass;
@property (nonatomic, copy) NSString *libraryID;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic) float progress;
@property (nonatomic) unsigned int syncStage;
@property (nonatomic) unsigned int syncType;
@property (nonatomic) unsigned long long totalAssetCount;
@property (nonatomic) unsigned long long totalItemCount;
@property (getter=isWirelessSync, nonatomic) bool wirelessSync;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)completedAssetCount;
- (id)dataClass;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLibraryID:(id)arg1 dataClass:(id)arg2;
- (bool)isAutomaticSync;
- (bool)isEqual:(id)arg1;
- (bool)isWirelessSync;
- (id)libraryID;
- (id)localizedDescription;
- (float)progress;
- (void)setAutomaticSync:(bool)arg1;
- (void)setCompletedAssetCount:(unsigned long long)arg1;
- (void)setDataClass:(id)arg1;
- (void)setLibraryID:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setSyncStage:(unsigned int)arg1;
- (void)setSyncType:(unsigned int)arg1;
- (void)setTotalAssetCount:(unsigned long long)arg1;
- (void)setTotalItemCount:(unsigned long long)arg1;
- (void)setWirelessSync:(bool)arg1;
- (unsigned int)syncStage;
- (unsigned int)syncType;
- (unsigned long long)totalAssetCount;
- (unsigned long long)totalItemCount;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitDatabaseLastWeekUsageEvent : PBCodable <NSCopying> {
    long long  _databaseSizeMB;
    struct { 
        unsigned int databaseSizeMB : 1; 
        unsigned int highFrequencyDataSizeMB : 1; 
        unsigned int lastMonthDatabaseSizeIncreaseMB : 1; 
        unsigned int lastMonthRowsAdded : 1; 
        unsigned int manuallyEnteredTypesCount : 1; 
        unsigned int percentageDeletedObjects : 1; 
        unsigned int rowCountObjects : 1; 
        unsigned int thirdPartyAppsCount : 1; 
        unsigned int thirdPartyAppsWroteDataCount : 1; 
        unsigned int timestamp : 1; 
        unsigned int rowCountCDA : 1; 
        unsigned int hasWatchSource : 1; 
    }  _has;
    bool  _hasWatchSource;
    long long  _highFrequencyDataSizeMB;
    long long  _lastMonthDatabaseSizeIncreaseMB;
    long long  _lastMonthRowsAdded;
    long long  _manuallyEnteredTypesCount;
    long long  _percentageDeletedObjects;
    int  _rowCountCDA;
    long long  _rowCountObjects;
    long long  _thirdPartyAppsCount;
    long long  _thirdPartyAppsWroteDataCount;
    unsigned long long  _timestamp;
}

@property (nonatomic) long long databaseSizeMB;
@property (nonatomic) bool hasDatabaseSizeMB;
@property (nonatomic) bool hasHasWatchSource;
@property (nonatomic) bool hasHighFrequencyDataSizeMB;
@property (nonatomic) bool hasLastMonthDatabaseSizeIncreaseMB;
@property (nonatomic) bool hasLastMonthRowsAdded;
@property (nonatomic) bool hasManuallyEnteredTypesCount;
@property (nonatomic) bool hasPercentageDeletedObjects;
@property (nonatomic) bool hasRowCountCDA;
@property (nonatomic) bool hasRowCountObjects;
@property (nonatomic) bool hasThirdPartyAppsCount;
@property (nonatomic) bool hasThirdPartyAppsWroteDataCount;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasWatchSource;
@property (nonatomic) long long highFrequencyDataSizeMB;
@property (nonatomic) long long lastMonthDatabaseSizeIncreaseMB;
@property (nonatomic) long long lastMonthRowsAdded;
@property (nonatomic) long long manuallyEnteredTypesCount;
@property (nonatomic) long long percentageDeletedObjects;
@property (nonatomic) int rowCountCDA;
@property (nonatomic) long long rowCountObjects;
@property (nonatomic) long long thirdPartyAppsCount;
@property (nonatomic) long long thirdPartyAppsWroteDataCount;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsRowCountCDA:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)databaseSizeMB;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDatabaseSizeMB;
- (bool)hasHasWatchSource;
- (bool)hasHighFrequencyDataSizeMB;
- (bool)hasLastMonthDatabaseSizeIncreaseMB;
- (bool)hasLastMonthRowsAdded;
- (bool)hasManuallyEnteredTypesCount;
- (bool)hasPercentageDeletedObjects;
- (bool)hasRowCountCDA;
- (bool)hasRowCountObjects;
- (bool)hasThirdPartyAppsCount;
- (bool)hasThirdPartyAppsWroteDataCount;
- (bool)hasTimestamp;
- (bool)hasWatchSource;
- (unsigned long long)hash;
- (long long)highFrequencyDataSizeMB;
- (bool)isEqual:(id)arg1;
- (long long)lastMonthDatabaseSizeIncreaseMB;
- (long long)lastMonthRowsAdded;
- (long long)manuallyEnteredTypesCount;
- (void)mergeFrom:(id)arg1;
- (long long)percentageDeletedObjects;
- (bool)readFrom:(id)arg1;
- (int)rowCountCDA;
- (id)rowCountCDAAsString:(int)arg1;
- (long long)rowCountObjects;
- (void)setDatabaseSizeMB:(long long)arg1;
- (void)setHasDatabaseSizeMB:(bool)arg1;
- (void)setHasHasWatchSource:(bool)arg1;
- (void)setHasHighFrequencyDataSizeMB:(bool)arg1;
- (void)setHasLastMonthDatabaseSizeIncreaseMB:(bool)arg1;
- (void)setHasLastMonthRowsAdded:(bool)arg1;
- (void)setHasManuallyEnteredTypesCount:(bool)arg1;
- (void)setHasPercentageDeletedObjects:(bool)arg1;
- (void)setHasRowCountCDA:(bool)arg1;
- (void)setHasRowCountObjects:(bool)arg1;
- (void)setHasThirdPartyAppsCount:(bool)arg1;
- (void)setHasThirdPartyAppsWroteDataCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasWatchSource:(bool)arg1;
- (void)setHighFrequencyDataSizeMB:(long long)arg1;
- (void)setLastMonthDatabaseSizeIncreaseMB:(long long)arg1;
- (void)setLastMonthRowsAdded:(long long)arg1;
- (void)setManuallyEnteredTypesCount:(long long)arg1;
- (void)setPercentageDeletedObjects:(long long)arg1;
- (void)setRowCountCDA:(int)arg1;
- (void)setRowCountObjects:(long long)arg1;
- (void)setThirdPartyAppsCount:(long long)arg1;
- (void)setThirdPartyAppsWroteDataCount:(long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (long long)thirdPartyAppsCount;
- (long long)thirdPartyAppsWroteDataCount;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

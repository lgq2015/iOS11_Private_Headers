/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOUserSession : NSObject {
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _cohortSessionID;
    double  _cohortSessionStartTime;
    NSLock * _lock;
    GEOUserSessionEntity * _mapsUserSessionEntity;
    NSData * _navigationDirectionsID;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _navigationSessionID;
    double  _navigationSessionStartTime;
    NSData * _previousNavigationDirectionsID;
    double  _previousNavigationSessionEndTime;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _previousNavigationSessionID;
    double  _previousNavigationSessionStartTime;
    unsigned int  _sequenceNumber;
    double  _sessionCreationTime;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionID;
    bool  _shareSessionWithMaps;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _usageCollectionSessionID;
    double  _usageSessionIDGenerationTime;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _zeroSessionID;
    bool  _zeroSessionIDMode;
}

@property (readonly) GEOUserSessionEntity *cohortSessionEntity;
@property (readonly) GEOUserSessionEntity *longSessionEntity;
@property (nonatomic, retain) GEOUserSessionEntity *mapsUserSessionEntity;
@property (readonly) GEOUserSessionEntity *navSessionEntity;
@property bool shareSessionWithMaps;
@property (readonly) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } usageCollectionSessionID;
@property (readonly) GEOUserSessionSnapshot *userSessionSnapshot;
@property bool zeroSessionIDMode;

+ (bool)isGeod;
+ (void)setIsGeod;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_defaultForKey:(id)arg1;
- (void)_generateNewNavSessionID;
- (double)_getCFAbsoluteCurrentTime;
- (void)_mapsSessionEntityWithCallback:(id /* block */)arg1;
- (void)_renewCohortSessionID;
- (void)_renewUsageCollectionSessionID;
- (void)_resetSessionID;
- (void)_safe_renewCohortSessionID;
- (void)_safe_renewUsageCollectionSessionID;
- (void)_setDefault:(id)arg1 forKey:(id)arg2;
- (void)_updateNavSessionID;
- (void)_updateSessionID;
- (void)_updateWithNewUUIDForSessionID:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; }*)arg1;
- (id)cohortSessionEntity;
- (void)dealloc;
- (void)endNavigationSession;
- (unsigned int)incrementSequenceNumber;
- (id)init;
- (id)longSessionEntity;
- (void)mapsSessionEntityWithCallback:(id /* block */)arg1 shareSessionIDWithMaps:(bool)arg2 resetSession:(bool)arg3;
- (id)mapsUserSessionEntity;
- (id)navSessionEntity;
- (void)setMapsUserSessionEntity:(id)arg1;
- (void)setShareSessionWithMaps:(bool)arg1;
- (void)setSharedMapsUserSessionEntity:(id)arg1 shareSessionIDWithMaps:(bool)arg2;
- (void)setZeroSessionIDMode:(bool)arg1;
- (bool)shareSessionWithMaps;
- (void)startNavigationSessionWithDirectionsID:(id)arg1 originalDirectionsID:(id)arg2;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })usageCollectionSessionID;
- (id)userSessionSnapshot;
- (bool)zeroSessionIDMode;

@end

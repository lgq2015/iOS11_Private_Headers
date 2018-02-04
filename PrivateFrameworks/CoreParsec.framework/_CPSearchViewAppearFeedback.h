/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPSearchViewAppearFeedback : PBCodable <NSSecureCoding, _CPProcessableFeedback, _CPSearchViewAppearFeedback> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int viewAppearEvent : 1; 
        unsigned int isOnLockScreen : 1; 
        unsigned int isOverApp : 1; 
        unsigned int readerTextAvailable : 1; 
    }  _has;
    bool  _isOnLockScreen;
    bool  _isOverApp;
    bool  _readerTextAvailable;
    unsigned long long  _timestamp;
    int  _viewAppearEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) id feedbackJSON;
@property (nonatomic, readonly) bool hasIsOnLockScreen;
@property (nonatomic, readonly) bool hasIsOverApp;
@property (nonatomic, readonly) bool hasReaderTextAvailable;
@property (nonatomic, readonly) bool hasTimestamp;
@property (nonatomic, readonly) bool hasViewAppearEvent;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isOnLockScreen;
@property (nonatomic) bool isOverApp;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) bool readerTextAvailable;
@property (nonatomic, readonly) bool requiresQueryId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int viewAppearEvent;

- (id)dictionaryRepresentation;
- (bool)hasIsOnLockScreen;
- (bool)hasIsOverApp;
- (bool)hasReaderTextAvailable;
- (bool)hasTimestamp;
- (bool)hasViewAppearEvent;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isOnLockScreen;
- (bool)isOverApp;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (bool)readerTextAvailable;
- (bool)requiresQueryId;
- (void)setIsOnLockScreen:(bool)arg1;
- (void)setIsOverApp:(bool)arg1;
- (void)setReaderTextAvailable:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setViewAppearEvent:(int)arg1;
- (unsigned long long)timestamp;
- (int)viewAppearEvent;
- (void)writeTo:(id)arg1;

@end

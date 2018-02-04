/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPStorageIterator : NSObject {
    unsigned long long  _charIndex;
    bool  _lastEventWasMarker;
    NSMutableArray * _locationProviders;
    NSCharacterSet * _markers;
    NSMutableArray * _pendingEvents;
    NSMutableArray * _rangeProviders;
    bool  _sendEventsForNilObjects;
    unsigned long long  _startCharIndex;
    TSWPStorage * _storage;
}

@property (nonatomic) unsigned long long charIndex;
@property (nonatomic) bool lastEventWasMarker;
@property (nonatomic, retain) NSMutableArray *locationProviders;
@property (nonatomic, retain) NSCharacterSet *markers;
@property (nonatomic, retain) NSMutableArray *pendingEvents;
@property (nonatomic, retain) NSMutableArray *rangeProviders;
@property (nonatomic) bool sendEventsForNilObjects;
@property (nonatomic) unsigned long long startCharIndex;
@property (nonatomic, retain) TSWPStorage *storage;

- (void).cxx_destruct;
- (void)addAttributeRangeProvider:(int)arg1;
- (void)addLocationProvider:(id)arg1;
- (void)addRangeProvider:(id)arg1;
- (unsigned long long)charIndex;
- (id)description;
- (id)initWithStorage:(id)arg1;
- (bool)lastEventWasMarker;
- (id)locationProviders;
- (id)markers;
- (id)nextEvent;
- (void)p_emitEventForMarkerCharacter:(unsigned short)arg1 atIndex:(unsigned long long)arg2;
- (void)p_emitEventWithType:(int)arg1 provider:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 object:(id)arg4;
- (void)p_emitPendingCharactersAndEvent:(id)arg1;
- (void)p_forceRangeEndForProvider:(id)arg1 providerIndex:(unsigned long long)arg2 atCharIndex:(unsigned long long)arg3;
- (id)pendingEvents;
- (id)rangeProviders;
- (bool)sendEventsForNilObjects;
- (void)setCharIndex:(unsigned long long)arg1;
- (void)setLastEventWasMarker:(bool)arg1;
- (void)setLocationProviders:(id)arg1;
- (void)setMarkers:(id)arg1;
- (void)setPendingEvents:(id)arg1;
- (void)setRangeProviders:(id)arg1;
- (void)setSendEventsForNilObjects:(bool)arg1;
- (void)setStartCharIndex:(unsigned long long)arg1;
- (void)setStorage:(id)arg1;
- (unsigned long long)startCharIndex;
- (id)storage;

@end

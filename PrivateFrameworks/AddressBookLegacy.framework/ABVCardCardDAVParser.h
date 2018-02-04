/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@interface ABVCardCardDAVParser : ABVCardParser {
    NSData * _lastCropRectChecksum;
    int  _lastCropRectHeight;
    int  _lastCropRectWidth;
    int  _lastCropRectX;
    int  _lastCropRectY;
    bool  _localRecordHasAdditionalProperties;
    bool  _removeExistingProperties;
    NSMutableDictionary * _unknownAttributes;
}

@property (readonly, retain) NSData *lastCropRectChecksum;
@property (readonly) int lastCropRectHeight;
@property (readonly) int lastCropRectWidth;
@property (readonly) int lastCropRectX;
@property (readonly) int lastCropRectY;
@property (readonly) bool localRecordHasAdditionalProperties;

- (bool)_handleUnknownTag:(id)arg1 withValue:(id)arg2;
- (void)cleanUpCardState;
- (void*)createRecordInSource:(void*)arg1 outRecordType:(unsigned int*)arg2;
- (void)dealloc;
- (id)defaultADRLabel;
- (id)defaultLabel;
- (id)defaultURLLabel;
- (id)genericLabel;
- (bool)importToGroup:(void*)arg1 removeExistingProperties:(bool)arg2;
- (bool)importToPerson:(void*)arg1 removeExistingProperties:(bool)arg2;
- (id)initWithData:(id)arg1 watchdogTimer:(id)arg2;
- (id)lastCropRectChecksum;
- (int)lastCropRectHeight;
- (int)lastCropRectWidth;
- (int)lastCropRectX;
- (int)lastCropRectY;
- (bool)localRecordHasAdditionalProperties;
- (void)noteLackOfValueForImageData;
- (void)noteLackOfValueForProperty:(unsigned int)arg1;
- (bool)parseUID;
- (void)setLocalRecordHasAdditionalProperties:(bool)arg1;

@end

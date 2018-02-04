/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBColor : PBCodable <NSSecureCoding, _SFPBColor> {
    _SFPBGraphicalFloat * _alphaComponent;
    _SFPBGraphicalFloat * _blueComponent;
    _SFPBGraphicalFloat * _greenComponent;
    _SFPBGraphicalFloat * _redComponent;
}

@property (nonatomic, retain) _SFPBGraphicalFloat *alphaComponent;
@property (nonatomic, retain) _SFPBGraphicalFloat *blueComponent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _SFPBGraphicalFloat *greenComponent;
@property (nonatomic, readonly) bool hasAlphaComponent;
@property (nonatomic, readonly) bool hasBlueComponent;
@property (nonatomic, readonly) bool hasGreenComponent;
@property (nonatomic, readonly) bool hasRedComponent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBGraphicalFloat *redComponent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)alphaComponent;
- (id)blueComponent;
- (id)dictionaryRepresentation;
- (id)greenComponent;
- (bool)hasAlphaComponent;
- (bool)hasBlueComponent;
- (bool)hasGreenComponent;
- (bool)hasRedComponent;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)redComponent;
- (void)setAlphaComponent:(id)arg1;
- (void)setBlueComponent:(id)arg1;
- (void)setGreenComponent:(id)arg1;
- (void)setRedComponent:(id)arg1;
- (void)writeTo:(id)arg1;

@end

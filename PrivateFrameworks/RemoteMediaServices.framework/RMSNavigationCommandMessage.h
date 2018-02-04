/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSNavigationCommandMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int navigationCommand : 1; 
        unsigned int sessionIdentifier : 1; 
    }  _has;
    int  _navigationCommand;
    int  _sessionIdentifier;
}

@property (nonatomic) bool hasNavigationCommand;
@property (nonatomic) bool hasSessionIdentifier;
@property (nonatomic) int navigationCommand;
@property (nonatomic) int sessionIdentifier;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNavigationCommand;
- (bool)hasSessionIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)navigationCommand;
- (bool)readFrom:(id)arg1;
- (int)sessionIdentifier;
- (void)setHasNavigationCommand:(bool)arg1;
- (void)setHasSessionIdentifier:(bool)arg1;
- (void)setNavigationCommand:(int)arg1;
- (void)setSessionIdentifier:(int)arg1;
- (void)writeTo:(id)arg1;

@end

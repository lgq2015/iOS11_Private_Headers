/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPPathComponent : NSObject <NSCopying> {
    unsigned short  _index;
    NSUUID * _originIdentifier;
}

@property (nonatomic, readonly) unsigned short index;
@property (nonatomic, readonly) NSUUID *originIdentifier;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (unsigned short)index;
- (id)initWithIndex:(unsigned short)arg1 originIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)originIdentifier;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIPropertyGroupItemIDSHandle : NSObject <CNUIIDSHandle> {
    CNUIContactPropertyIDSHandle * _contactPropertyHandle;
    CNPropertyGroupItem * _propertyGroupItem;
}

@property (nonatomic, readonly, copy) NSString *_cnui_IDSIDRepresentation;
@property (nonatomic, readonly) CNUIContactPropertyIDSHandle *contactPropertyHandle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) CNPropertyGroupItem *propertyGroupItem;
@property (readonly) Class superclass;

+ (bool)supportsPropertyGroupItem:(id)arg1;

- (void).cxx_destruct;
- (id)_cnui_IDSIDRepresentation;
- (id)contactPropertyHandle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithPropertyGroupItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)propertyGroupItem;

@end

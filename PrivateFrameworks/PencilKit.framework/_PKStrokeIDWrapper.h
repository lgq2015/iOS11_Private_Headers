/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface _PKStrokeIDWrapper : NSObject <CHStrokeIdentifier> {
    struct _PKStrokeID { 
        unsigned int clock; 
        unsigned char replicaUUID[16]; 
        unsigned int subclock; 
    }  _strokeID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; } strokeID;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithStrokeID:(struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })arg1;
- (bool)isEqual:(id)arg1;
- (void)setStrokeID:(struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })arg1;
- (struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })strokeID;

@end
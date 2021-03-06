/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUBluetoothDevice : NSObject {
    struct { 
        unsigned char bytes[6]; 
    }  _address;
    NSString * _addressString;
    int  _colorCode;
    bool  _magicPaired;
    NSString * _manufacturer;
    NSString * _modelNumber;
    NSString * _name;
    bool  _present;
    unsigned int  _productIdentifier;
    bool  _supportsAACPService;
}

@property (nonatomic) struct { unsigned char x1[6]; } address;
@property (nonatomic, copy) NSString *addressString;
@property (nonatomic) int colorCode;
@property (nonatomic) bool magicPaired;
@property (nonatomic, copy) NSString *manufacturer;
@property (nonatomic, copy) NSString *modelNumber;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool present;
@property (nonatomic) unsigned int productIdentifier;
@property (nonatomic) bool supportsAACPService;

- (void).cxx_destruct;
- (struct { unsigned char x1[6]; })address;
- (id)addressString;
- (int)colorCode;
- (id)description;
- (id)init;
- (bool)magicPaired;
- (id)manufacturer;
- (id)modelNumber;
- (id)name;
- (bool)present;
- (unsigned int)productIdentifier;
- (void)setAddress:(struct { unsigned char x1[6]; })arg1;
- (void)setAddressString:(id)arg1;
- (void)setColorCode:(int)arg1;
- (void)setMagicPaired:(bool)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModelNumber:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPresent:(bool)arg1;
- (void)setProductIdentifier:(unsigned int)arg1;
- (void)setSupportsAACPService:(bool)arg1;
- (bool)supportsAACPService;

@end

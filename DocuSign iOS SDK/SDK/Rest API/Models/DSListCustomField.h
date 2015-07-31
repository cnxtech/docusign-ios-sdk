//
//  DSListCustomField.h
//  
//
//  Created by Deyton Sehn on 7/31/15.
//
//

#import "DSRestAPIResponseModel.h"

@interface DSListCustomField : DSRestAPIResponseModel

@property (nonatomic) NSString *fieldID;
@property (nonatomic) NSString *name;
@property (nonatomic) BOOL      show;
@property (nonatomic) BOOL      required;
@property (nonatomic) NSString *value;
@property (nonatomic) NSString *listItems;

@end

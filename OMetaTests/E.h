//
//  E.h
//  OMeta
//
//  Created by Chris Eidhof on 11/7/12.
//  Copyright (c) 2012 Chris Eidhof. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CEEvaluator.h"

@interface E : CEEvaluator

- (CEResultAndStream*)exp:(id)stream;

@end
